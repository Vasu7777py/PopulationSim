#pragma once

#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <random>
#include <string>

#define TEMP template <typename type>

namespace SimMath {
	TEMP
	struct Vector2d {
		type x, y;

		//Vector2d();
		Vector2d(type x, type y);

		Vector2d<type> operator+(Vector2d<type>* other);
		Vector2d<type> operator-(Vector2d<type>* other);
	};

	TEMP
	struct Vector3d {
		type x, y, z;

		//Vector3d();
		Vector3d(type x, type y, type z);
	};
}

namespace SimDS {
	TEMP
	class LinkedList1d {
	private:
		struct node1d {
			type data;
			node1d* nxt;
		};
		node1d* head, * tail;
		int size;
	public:
		LinkedList1d();
		
		node1d* getHead();
		node1d* getTail();
		int getSize();
		void Print();
		node1d* getNode(int Position);
		int find(type data);
		void addLast(type data);
		void addFirst(type data);
		void addNode(type data, int index);
	};

	TEMP
	class LinkedList2d {
	private:
		struct node2d {
			type data;
			node2d* nxt, * prev;
		};
		node2d* head, * tail;
		int size;
	public:
		LinkedList2d();

		node2d* getHead();
		node2d* getTail();
		int getSize();
		void Print();
		node2d* getNode(int Position);
		int find(type data);
		void addLast(type data);
		void addFirst(type data);
		void addNode(type data, int index);
	};
}

namespace Sim{
	struct Gene{
		float health, strenght, energy, reproductiveRate;
		float friendlyValue; // 0-1
		std::string familyName;
		Gene();
		Gene(float health, float strenght, float energy, float reproductiveRate, float friendlyValue, std::string familyName);
	};

	class Person {
	private:
		Gene traids;
		int age;
		char sex;

		Person* friends;

	public:
		Person();
		Person(Gene traid, char sex);

		const Gene* getGene();
		const int getAge();
		const char getSex();
	};

	class food {
	private:
		
	};
}
