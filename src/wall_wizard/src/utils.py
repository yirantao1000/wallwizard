import numpy as np

def quaternion_inverse(q):
    """Compute the inverse of a quaternion."""
    q_conjugate = q * np.array([1, -1, -1, -1])
    q_norm_squared = np.dot(q, q)
    q_inverse = q_conjugate / q_norm_squared
    return q_inverse

def quaternion_multiply(q1, q2):
    """Multiply two quaternions."""
    w1, x1, y1, z1 = q1
    w2, x2, y2, z2 = q2
    w = w1*w2 - x1*x2 - y1*y2 - z1*z2
    x = w1*x2 + x1*w2 + y1*z2 - z1*y2
    y = w1*y2 + y1*w2 + z1*x2 - x1*z2
    z = w1*z2 + z1*w2 + x1*y2 - y1*x2
    return np.array([w, x, y, z])

def compute_relative_quaternion(q1, q2):
    """Compute the relative quaternion between two quaternions."""
    q1_inv = quaternion_inverse(q1)
    q_rel = quaternion_multiply(q2, q1_inv)
    return q_rel

def quaternion_to_euler(q):
    """Convert a quaternion into Euler angles (roll, pitch, yaw)"""
    # Extract the single quaternion components
    w, x, y, z = q

    # Roll (x-axis rotation)
    sinr_cosp = 2 * (w * x + y * z)
    cosr_cosp = 1 - 2 * (x**2 + y**2)
    roll = np.arctan2(sinr_cosp, cosr_cosp)

    # Pitch (y-axis rotation)
    sinp = 2 * (w * y - z * x)
    if abs(sinp) >= 1:
        # Use 90 degrees if out of range
        pitch = np.pi / 2 * np.sign(sinp)
    else:
        pitch = np.arcsin(sinp)

    # Yaw (z-axis rotation)
    siny_cosp = 2 * (w * z + x * y)
    cosy_cosp = 1 - 2 * (y**2 + z**2)
    yaw = np.arctan2(siny_cosp, cosy_cosp)

    return roll, pitch, yaw


def quaternion_rotate(q, v):
    """
    Rotate vector v by quaternion q.
    """
    # Quaternion conjugate
    q_conj = np.array([q[0], -q[1], -q[2], -q[3]])
    # Vector as quaternion
    v_q = np.array([0] + v.tolist())
    # Quaternion multiplication: q * v
    qv = quaternion_multiply(q, v_q)
    # Quaternion multiplication: (q * v) * q_conj
    v_rotated = quaternion_multiply(qv, q_conj)
    # Return the vector part of the resulting quaternion
    return v_rotated[1:]