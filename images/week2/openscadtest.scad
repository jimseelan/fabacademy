//cube(100,50,25);
//sphere(50);
translate([5,-10,5]){sphere(2);}


//cube([2,3,4]);
translate([3,0,0]) {
  cube([2,3,4]);
}

color([1,1,0]) cube([2,3,4]);
translate([3,0,0])
color([0,1,1]) cube([2,3,6]);
translate([6,0,0])
color([1,0,1]) cube([2,3,8]);
//
translate([9,0,0])
color([1,1,0]) cube([2,3,8]);
translate([12,0,0])
color([0,1,0]) cube([2,3,6]);
translate([15,0,0])
color([1,0,0]) cube([2,3,4]);
