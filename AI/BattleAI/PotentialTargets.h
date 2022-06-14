/*
 * PotentialTargets.h, part of VCMI engine
 *
 * Authors: listed in file AUTHORS in main folder
 *
 * License: GNU General Public License v2.0 or later
 * Full text of license available in license.txt file, in main folder
 *
 */
#pragma once
#include "AttackPossibility.h"

class PotentialTargets
{
public:
	std::vector<AttackPossibility> possibleAttacks;
	std::vector<const battle::Unit *> unreachableEnemies;

	PotentialTargets(){};
	PotentialTargets(const battle::Unit * attacker, const HypotheticBattle * state);

	AttackPossibility bestAction() const;
	int64_t bestActionValue() const;
};
