#include <stdio.h>

int main() {
	double cuboid_l, cuboid_w, cuboid_h;
	double cyl_r, cyl_h;
	double sph_r;
	// double used as float is precise to 6 decimal places only
	double pi = 3.14159265;

	scanf("%lf %lf %lf", &cuboid_l, &cuboid_w, &cuboid_h);
	scanf("%lf %lf", &cyl_r, &cyl_h);
	scanf("%lf", &sph_r);
	
	double cuboid_vol = cuboid_l * cuboid_w * cuboid_h;
	double cyl_vol = pi * cyl_r * cyl_r * cyl_h;
	double sph_vol = pi * sph_r * sph_r * sph_r * 4 / 3;

	printf("%.2lf\n", cuboid_vol);
	printf("%.2lf\n", cyl_vol);
	printf("%.2lf\n", sph_vol);
	return 0;
}
