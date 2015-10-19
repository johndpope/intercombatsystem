// This file was auto-generated by cpptoswift.
// Do not edit this file, edit the original source file /Users/uli/Programming/intercombatsystem/intercombatsystem_cpp/intercombatsystem.hpp

public class buff
{
	let cppinstance : COpaquePointer

	deinit {
		buff_deinit(cppinstance)
	}

	public init(type : Int32,amount : Double,max_amount : Double,start_angle : Double,relative_angle : Double,max_distance : Double,bleedthrough : Double,permanent : Bool) {
		cppinstance = buff_init(type,amount,max_amount,start_angle,relative_angle,max_distance,bleedthrough,permanent)
	}

	public func get_type() -> Int32 {
		return buff_get_type(cppinstance)
	}

	public func set_type(inType : Int32) -> Void {
		return buff_set_type(cppinstance, inType)
	}

	public func get_bleedthrough() -> Double {
		return buff_get_bleedthrough(cppinstance)
	}

	public func set_bleedthrough(n : Double) -> Void {
		return buff_set_bleedthrough(cppinstance, n)
	}

	public func get_amount() -> Double {
		return buff_get_amount(cppinstance)
	}

	public func set_amount(n : Double) -> Void {
		return buff_set_amount(cppinstance, n)
	}

	public func get_max_amount() -> Double {
		return buff_get_max_amount(cppinstance)
	}

	public func set_max_amount(n : Double) -> Void {
		return buff_set_max_amount(cppinstance, n)
	}

	public func get_start_angle() -> Double {
		return buff_get_start_angle(cppinstance)
	}

	public func set_start_angle(n : Double) -> Void {
		return buff_set_start_angle(cppinstance, n)
	}

	public func get_relative_angle() -> Double {
		return buff_get_relative_angle(cppinstance)
	}

	public func set_relative_angle(n : Double) -> Void {
		return buff_set_relative_angle(cppinstance, n)
	}

	public func get_max_distance() -> Double {
		return buff_get_max_distance(cppinstance)
	}

	public func set_max_distance(n : Double) -> Void {
		return buff_set_max_distance(cppinstance, n)
	}

	public func get_permanent() -> Bool {
		return buff_get_permanent(cppinstance)
	}

	public func set_permanent(n : Bool) -> Void {
		return buff_set_permanent(cppinstance, n)
	}

}
public class intercombatactor
{
	let cppinstance : COpaquePointer

	deinit {
		intercombatactor_deinit(cppinstance)
	}

	public init() {
		cppinstance = intercombatactor_init()
	}

	public func turn_by_radians(radians : Double) -> Void {
		return intercombatactor_turn_by_radians(cppinstance, radians)
	}

	public func radian_angle_to_actor(target : intercombatactor) -> Double {
		return intercombatactor_radian_angle_to_actor(cppinstance, target.cppinstance)
	}

	public func distance_to_actor(target : intercombatactor) -> Double {
		return intercombatactor_distance_to_actor(cppinstance, target.cppinstance)
	}

	public func get_angle() -> Double {
		return intercombatactor_get_angle(cppinstance)
	}

	public func get_x() -> Double {
		return intercombatactor_get_x(cppinstance)
	}

	public func set_x(inX : Double) -> Void {
		return intercombatactor_set_x(cppinstance, inX)
	}

	public func get_y() -> Double {
		return intercombatactor_get_y(cppinstance)
	}

	public func set_y(inY : Double) -> Void {
		return intercombatactor_set_y(cppinstance, inY)
	}

	public func get_health() -> Double {
		return intercombatactor_get_health(cppinstance)
	}

	public func set_health(n : Double) -> Void {
		return intercombatactor_set_health(cppinstance, n)
	}

	public func add_buff(inBuff : buff) -> Void {
		return intercombatactor_add_buff(cppinstance, inBuff.cppinstance)
	}

	public func hit(inAttack : buff,attacker : intercombatactor) -> Bool {
		return intercombatactor_hit(cppinstance, inAttack.cppinstance,attacker.cppinstance)
	}

}
