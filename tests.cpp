/*
 *  tests.cpp
 *  atrace
 *
 *  Created by Alexander Strange on 8/16/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */

#include "tests.h"
#include "trig.h"
#include "scene.h"
#include "raytrace.h"

static void test_triple()
{
	vector3 one(1,1,1), half(.5,1,.5);
	
	(one + half).print();
	(one - half).print();
	(one * half).print();
	(one / half).print();
		
	vector3 tmp = one / half;
	
	(-one).print();
	
	printf("dot %f %f\n",one.dot(half),tmp.dot_self());
}

static void test_ray()
{
	ray r(point3(0.), vector3(0,1,0));
	
	r.pointAt(2).print();
	
	ray_from_to(point3(0.), point3(0,2,0)).pointAt(2).print();
	ray_from_to(point3(0.), point3(0,0,1)).pointAt(2).print();
}
/*
static void test_sphere()
{
	sphere s(point3(0.), 2);
	
	s.mat.c = color(.5,.5,.5);
	
	intersectResult res;
	world_distance d;
	
	res = s.intersect(ray_from_to(point3(0.),point3(0,0,1)), &d);
	
	printf("intersect center to edge: type %d dist %f\n",res,d);
	
	res = s.intersect(ray_from_to(point3(0,-4,0),point3(0,1,0)), &d);
	
	printf("intersect outside to edge: type %d dist %f\n",res,d);
	
	res = s.intersect(ray_from_to(point3(0,-4,0),point3(0,-4,1)), &d);
	
	printf("intersect outside to edge: type %d dist %f\n",res,d);
	
	s.normalAt(ray(s.origin, point3(0.))).print();
	s.normalAt(ray(point3(0,0,2), point3(0.))).print();
}

static void test_plane()
{
	plane_prim p(point3(0,1,0), 0);
	
	p.mat.c = color(.5, .5, .5);
	
	intersectResult res;
	world_distance d;
	
	res = p.intersect(ray_from_to(point3(0,2,0),point3(0.)), &d);
	
	printf("intersect above to plane: type %d dist %f\n",res,d);
	
	res = p.intersect(ray_from_to(point3(0,-2,0),point3(0.)), &d);
	
	printf("intersect below to plane: type %d dist %f\n",res,d);
	
	res = p.intersect(ray_from_to(point3(0,2,0),point3(0,1,100)), &d);
	
	printf("intersect above to far-off plane: type %d dist %f\n",res,d);
	
	res = p.intersect(ray_from_to(point3(0,2,0),point3(0,2,100)), &d);
	
	printf("intersect above non-touching: type %d dist %f\n",res,d);
}
*/

void run_tests()
{
	test_triple();
	test_ray();
	//test_sphere();
	//test_plane();
}