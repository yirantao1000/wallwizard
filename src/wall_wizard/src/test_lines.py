import numpy as np

n_lines = 3
way_pts = np.zeros((n_lines, 10, 3))
for n in range(n_lines):
    way_pts[n,:,1] = -(0.4 + 0.2 * n)
    for nd in range(10):
        way_pts[n, nd, 0] = -0.3 + 0.06 * nd

print(way_pts)
np.save('test_lines.npy',way_pts)
