// This file was auto-generated by cpptoswift.
// Do not edit this file, edit the original source file /Users/uli/Programming/intercombatsystem/intercombatsystem_cpp/intercombatsystem.hpp

#include "intercombatsystem_cp2s.h"
#include "intercombatsystem.hpp"


extern "C" void buff_deinit( buff* _this )
{
	delete _this;
}

extern "C" buff* buff_init( int type, double amount, double max_amount, double start_angle, double relative_angle, double max_distance, double bleedthrough, bool permanent )
{
	return new buff(type,amount,max_amount,start_angle,relative_angle,max_distance,bleedthrough,permanent);
}

extern "C" int buff_get_type( buff* _this )
{
	return _this->get_type();
}

extern "C" void buff_set_type( buff* _this,  int inType )
{
	return _this->set_type(inType);
}

extern "C" double buff_get_bleedthrough( buff* _this )
{
	return _this->get_bleedthrough();
}

extern "C" void buff_set_bleedthrough( buff* _this,  double n )
{
	return _this->set_bleedthrough(n);
}

extern "C" double buff_get_amount( buff* _this )
{
	return _this->get_amount();
}

extern "C" void buff_set_amount( buff* _this,  double n )
{
	return _this->set_amount(n);
}

extern "C" double buff_get_max_amount( buff* _this )
{
	return _this->get_max_amount();
}

extern "C" void buff_set_max_amount( buff* _this,  double n )
{
	return _this->set_max_amount(n);
}

extern "C" double buff_get_start_angle( buff* _this )
{
	return _this->get_start_angle();
}

extern "C" void buff_set_start_angle( buff* _this,  double n )
{
	return _this->set_start_angle(n);
}

extern "C" double buff_get_relative_angle( buff* _this )
{
	return _this->get_relative_angle();
}

extern "C" void buff_set_relative_angle( buff* _this,  double n )
{
	return _this->set_relative_angle(n);
}

extern "C" double buff_get_max_distance( buff* _this )
{
	return _this->get_max_distance();
}

extern "C" void buff_set_max_distance( buff* _this,  double n )
{
	return _this->set_max_distance(n);
}

extern "C" bool buff_get_permanent( buff* _this )
{
	return _this->get_permanent();
}

extern "C" void buff_set_permanent( buff* _this,  bool n )
{
	return _this->set_permanent(n);
}

extern "C" void intercombatactor_deinit( intercombatactor* _this )
{
	delete _this;
}

extern "C" intercombatactor* intercombatactor_init( void )
{
	return new intercombatactor;
}

extern "C" void intercombatactor_turn_by_radians( intercombatactor* _this,  double radians )
{
	return _this->turn_by_radians(radians);
}

extern "C" double intercombatactor_radian_angle_to_actor( intercombatactor* _this,  intercombatactor* target )
{
	return _this->radian_angle_to_actor(target);
}

extern "C" double intercombatactor_distance_to_actor( intercombatactor* _this,  intercombatactor* target )
{
	return _this->distance_to_actor(target);
}

extern "C" double intercombatactor_get_angle( intercombatactor* _this )
{
	return _this->get_angle();
}

extern "C" double intercombatactor_get_x( intercombatactor* _this )
{
	return _this->get_x();
}

extern "C" void intercombatactor_set_x( intercombatactor* _this,  double inX )
{
	return _this->set_x(inX);
}

extern "C" double intercombatactor_get_y( intercombatactor* _this )
{
	return _this->get_y();
}

extern "C" void intercombatactor_set_y( intercombatactor* _this,  double inY )
{
	return _this->set_y(inY);
}

extern "C" double intercombatactor_get_health( intercombatactor* _this )
{
	return _this->get_health();
}

extern "C" void intercombatactor_set_health( intercombatactor* _this,  double n )
{
	return _this->set_health(n);
}

extern "C" double intercombatactor_get_value( intercombatactor* _this,  int buffType )
{
	return _this->get_value(buffType);
}

extern "C" void intercombatactor_add_buff( intercombatactor* _this,  buff * inBuff )
{
	return _this->add_buff(inBuff);
}

extern "C" bool intercombatactor_hit( intercombatactor* _this,  buff* inAttack, intercombatactor* attacker )
{
	return _this->hit(inAttack,attacker);
}

