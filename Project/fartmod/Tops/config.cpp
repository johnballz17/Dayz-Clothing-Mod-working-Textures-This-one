class CfgPatches
{
	class Mycustomgshirt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Tshirt_ColorBase;
	
	class Tshirt_this: Tshirt_ColorBase
	{
		scope=2;
		displayName="redtshirttwo";
		descriptionShort="redtshirttwo";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"Project\fartmod\Tops\Data\redtshirt.paa",
			 "Project\fartmod\Tops\Data\redtshirt.paa",
			 "Project\fartmod\Tops\Data\redtshirt.paa"
		};
		
	};
};