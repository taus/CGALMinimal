#pragma once

#include <CGAL/Polyhedron_3.h>
#include <CGAL/Nef_polyhedron_3.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef CGAL::Nef_polyhedron_3<Kernel> Nef_polyhedron;
typedef CGAL::Polyhedron_3<Kernel> Polyhedron;
typedef Polyhedron::HalfedgeDS HalfedgeDS;
//typedef HalfedgeDS::Vertex Vertex;
//typedef Vertex::Point Point;
typedef Polyhedron::Halfedge_handle Halfedge_handle;
typedef Polyhedron::Halfedge_iterator Halfedge_iterator;
typedef Polyhedron::size_type size_type;