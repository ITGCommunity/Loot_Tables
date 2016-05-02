/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	= <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Banana.

	///////////////////////////////////////////////////////////////////////////////
	// Loot Tables
	///////////////////////////////////////////////////////////////////////////////

	Defines which item group spawns in which building type. The loot table itself
	is linked with a building in exile_server_config.pbo/config/CfgBuildings. Spawn
	chances work like for items.

	Syntax:
	> <Loot Table Name>
	<Spawn Chance Within Loot Table>,<Group Name>
*/



/*
	Loot Tables
*/

///////////////////////////////////////////////////////////////////////////////
// Slums/Ghetto, Farms, Village Houses, Castle etc.
// Spawn Guerilla things :)
///////////////////////////////////////////////////////////////////////////////
> CivillianLowerClass
15, Trash
28, Food
10, Drinks
8, Pistols
5, PistolAmmo
3, PistolAttachments
4, SMG
3, SMGAmmo
3, SMGAttachments
20, CivilianClothing
11, CivilianBackpacks
5, CivilianVests
20, CivilianHeadgear
20, CivilianItems
1, Restraints
10, Chemlights
10, RoadFlares
15, CUPPointerAttachments
15, CUPAmmunition
10, CUPPistols
10, CUPSubMachineGuns
10, CUPAssaultRifles

///////////////////////////////////////////////////////////////////////////////
// Apartments, Offices etc.
///////////////////////////////////////////////////////////////////////////////
> CivillianUpperClass
15, Trash
30, Food
10, Drinks
21, Pistols
15, PistolAmmo
13, PistolAttachments
19, SMG
15, SMGAmmo
11, SMGAttachments
3, Rifles
3, RifleAmmo
3, RifleAttachments
20, CivilianClothing
23, CivilianBackpacks
18, CivilianVests
20, CivilianHeadgear
20, CivilianItems
10, Chemlights
10, RoadFlares
1, Restraints
15, CUPPointerAttachments
5, CUPMuzzleAttachments
11, CUPOpticAttachments
15, CUPAmmunition
21, CUPPistols
19, CUPSubMachineGuns
5, CUPAssaultRifles


///////////////////////////////////////////////////////////////////////////////
// Kiosks, Supermarkets etc.
///////////////////////////////////////////////////////////////////////////////
> Shop
20, Trash
40, Food
35, Drinks
20, Pistols
20, PistolAmmo
17, PistolAttachments
12, SMG
14, SMGAmmo
11, SMGAttachments
18, CivilianBackpacks
20, CivilianClothing
30, CivilianHeadgear
18, CivilianVests
17, CivilianItems
15, Chemlights
15, RoadFlares
4, SmokeGrenades
13, IndustrialItems
3, Restraints
3, MedicalItems
20, CUPPointerAttachments
10, CUPMuzzleAttachments
12, CUPOpticAttachments
19, CUPAmmunition
27, CUPPistols
31, CUPSubMachineGuns
25, CUPAssaultRifles


///////////////////////////////////////////////////////////////////////////////
// Construction Sites, Warehouses, Research etc.
///////////////////////////////////////////////////////////////////////////////
> Industrial
22, Trash
40, IndustrialItems
25, Vehicle
15, RoadFlares
5, Restraints
23, CUPPointerAttachments
25, CUPAmmunition
31, CUPPistols
5, CUPLightMachineGuns
22, CUPAssaultRifles
20, CUPExplosive


///////////////////////////////////////////////////////////////////////////////
// Factories
///////////////////////////////////////////////////////////////////////////////
> Factories
40, Electronics
40, Trash
50, IndustrialItems
10, CUPAmmunition
5, CUPLightMachineGuns
15, CUPAssaultRifles
5, CUPSniperRifles
15, CUPExplosive


///////////////////////////////////////////////////////////////////////////////
// Fuel Stations, Garages, Workshops etc.
///////////////////////////////////////////////////////////////////////////////
> VehicleService
20, Trash
25, IndustrialItems
40, Vehicle
35, RoadFlares
5, Restraints
5, CUPAmmunition
8, CUPPistols
5, CUPSubMachineGuns
1, CUPAssaultRifles


///////////////////////////////////////////////////////////////////////////////
// Towers, Barracks, Hangars etc.
///////////////////////////////////////////////////////////////////////////////
> Military
10, Trash
4, CivilianItems
164, GuerillaItems
211, MilitaryItems
160, HEGrenades
160, UGLFlares
160, UGLSmokes
140, HandGrenades
180, SmokeGrenades
152, Restraints
92, MedicalItems
175, GuerillaClothing
250, MilitaryClothing
100, GuerillaBackpacks
200, MilitaryBackpacks
131, GuerillaVests
200, MilitaryVests
250, DLCVests
120, GuerillaHeadgear
200, MilitaryHeadgear
100, Ghillies
150, DLCGhillies
100, Rebreathers
100, Rifles
100, RifleAmmo
300, RifleAttachments
150, LMG
100, LMGAmmo
80, Snipers
60, SniperAmmo
60, SniperAttachments
180, DLCRifles
150, DLCAmmo
150, DLCOptics
120, DLCSupressor
100, Bipods
170, Explosives
300, CUPPointerAttachments
300, CUPMuzzleAttachments
300, CUPOpticAttachments
300, CUPAmmunition
150, CUPPistols
150, CUPSubMachineGuns
250, CUPLightMachineGuns
300, CUPAssaultRifles
150, CUPSniperRifles
100, CUPExplosive
150, CUPLaunchers
50, CUPLauncherAmmo


///////////////////////////////////////////////////////////////////////////////
// Hospital, Medevac etc.
///////////////////////////////////////////////////////////////////////////////
> Medical
30, Trash
70, MedicalItems
50, CUPAmmunition
50, CUPPistols


///////////////////////////////////////////////////////////////////////////////
// Light Houses + Life Guard Towers + Castles
///////////////////////////////////////////////////////////////////////////////
> Tourist
10, MilitaryBackpacks
10, MilitaryHeadgear
40, Food
35, Drinks
40, Pistols
40, PistolAmmo
1, Ghillies
5, DLCGhillies
1, SniperAttachments
2, DLCRifles
2, DLCAmmo
2, DLCOptics
2, DLCSupressor
60, CivilianItems
10, HandGrenades
4, Restraints
34, MedicalItems
14, Explosives
5, CUPPointerAttachments
5, CUPMuzzleAttachments
5, CUPOpticAttachments
10, CUPAmmunition
40, CUPPistols
10, CUPSubMachineGuns
8, CUPAssaultRifles


