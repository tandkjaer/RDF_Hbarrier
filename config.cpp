class CfgPatches
{
	class RDF_Hbarrier
	{
		units[]=
		{
			"RDF_HB_LangItem",
			"RDF_HB_Lang"
		};
		weapons[]=
		{
			"RDF_HB_Lang"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"ace_common"
		};
		author="RDF";
		version="1.1.0.0";
		versionStr="1.1.0.0";
		versionAr[]={1,1,0,0};
	};
};



class CfgVehicles
{
	class Item_Base_F;
	class RDF_HB_LangItem: Item_Base_F
	{
		author[]=
		{
			"RDF"
		};
		scope=2;
		scopeCurator=2;
		displayName="Hbarrier lang1";
		descriptionShort="Wall";
		editorPreview="\RDF_Hbarrier\Data\model\Land_HBarrierWall6_F.jpg";
		vehicleClass="Items";
		class TransportItems
		{
			class _xx_RDF_HB_LangItem
			{
				name="RDF_Hbarrier_LItem";
				count=1;
			};
		};
	};
// This on works
	class Land_HBarrierWall6_F;
	class RDF_HB_Lang : Land_HBarrierWall6_F
	{
	scope =2;
	scopeCurator=2;
	displayName="Hesco Lang";
	editorPreview="\RDF_Hbarrier\Data\model\Land_HBarrierWall6_F.jpg";
	icon="iconObject_2x1";
  };
};


// this one get spawned but how do i get it to inherit from the one above ?
class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class RDF_HB_Lang: ACE_ItemCore
	{
		author[]=
		{
			"RDF"
		};
        scope = 2;
				scopeCurator=2;
        displayName = "Hbarrier lang";
				descriptionShort = "Hesco stor";
        model = "\A3\Structures_F\Mil\Fortification\HBarrierWall6_F.p3d";
        picture = "\RDF_Hbarrier\Data\model\Land_HBarrierWall6_F.jpg";
				editorPreview = "\RDF_Hbarrier\Data\model\Land_HBarrierWall6_F.jpg";

        class ItemInfo: InventoryItem_Base_F
				{
					mass=80;
				};
	};
};
