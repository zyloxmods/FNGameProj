#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "EWorldItemDropBehavior.h"
#include "FortItemDefinition.h"
#include "FortPickupRestrictionLists.h"
#include "SpecialActorSingleStatData.h"
#include "FortWorldItemDefinition.generated.h"

class AFortPickupEffect;
class UFortWorldItemDefinition;
class USkeletalMesh;
class USoundBase;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortWorldItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
    /** Tags that this item requires in order to be used or placed in the quickbar */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FGameplayTagContainer RequiredEquipTags;
    
protected:
    /** Should either be empty or have one entry! Allows tag-based restriction at pickup time. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    TArray<FFortPickupRestrictionLists> PickupRestrictionListEntry;

    /** If true and the item can be dropped, item is destroyed instead of actually dropped into world on drop */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    EWorldItemDropBehavior DropBehavior;

    /** Certain LTMs allow you to keep your inventory on respawn. For items like the Infinity Blade that we always want to drop, set this to true */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bIgnoreRespawningForDroppingAsPickup: 1;

    /** If true, this item can auto-equip over an item of the same class if no suitable tag match is found */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bCanAutoEquipByClass: 1;

    /** If true, item will stay in the inventory even when hitting a count of zero on final stack of item in inventory */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Auto Equip")
    uint8 bPersistInInventoryWhenFinalStackEmpty: 1;

    /** Does this item support quick bar focus? For instance, if you are scrolling through the quick bar with your mouse wheel, would
      * it make sense to have this thing be focused? An instance where you wouldn't want this is a potion, where selecting it would
      * increase your health, but not necessarily change what is in your hand. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bSupportsQuickbarFocus: 1;

    /** Does this item support quick bar focus when selected via gamepad even though it doesn't from mouse-wheel?
      * For instance, if you are scrolling through the quick bar via gamepad (such as in the "Combat Pro" Control Scheme)
      * does the item need to be focused?  But we want to avoid focusing it for mouse purposes?
      */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bSupportsQuickbarFocusForGamepadOnly: 1;

    /** Should this item be activated when it receives focus on the quickbar?  (Only valid if Supports Quickbar Focus is 
    	  * checked.  For most items, the answer is yes.  But for some (such as instant activation Hero Abilities), they
    	  * should NOT be activated since that will fire the ability.
    	  */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bShouldActivateWhenFocused: 1;

    /** Focus this item when it is added. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bForceFocusWhenAdded: 1;

    /** Set true if this item should not belong to any quickbar. e.g. ability weapon items */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bForceIntoOverflow: 1;

    /** if placed in overflow, make sure it sits there (it will be managed later) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bForceStayInOverflow: 1;

    /** When an item overflows can this item be dropped (i.e. replaced?) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bDropCurrentItemOnOverflow: 1;
    
public:
    /** Does this thing need to show an item toast when receiving it? */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Display")
    uint8 bShouldShowItemToast: 1;

    /** Should the directional arrow be displayed when pickup is outside minimap range */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    uint8 bShowDirectionalArrowWhenFarOff: 1;

    /** If true and the item can be dropped, item is destroyed instead of actually dropped into world on drop */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bCanBeDropped: 1;

    /** Indicates this athena gadget can be replaced by a pickup (when inventory is full) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bCanBeReplacedByPickup: 1;

    /** Is this item allowed to be stolen? */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bItemCanBeStolen: 1;

    /** Can this item be deposited in the Storage Vault? */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bCanBeDepositedInStorageVault: 1;

    /** Does this item care about durability? */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bItemHasDurability: 1;

    /** Is this item locked to your inventory */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bAllowedToBeLockedInInventory: 1;

    /** If true, use PickupMeshTransform to override relative transform to apply to our pickup mesh */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    uint8 bOverridePickupMeshTransform: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    uint8 bAlwaysCountForCollectionQuest: 1;

    /** Drops all items of this type on the ground upon death. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bDropOnDeath: 1;

    /** Drops all items of this type on the ground on logout. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bDropOnLogout: 1;

    /** Drops this item on DBNO */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bDropOnDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    uint8 bDoesNotNeedSourceSchematic: 1;

    /** Whether this pickups uses tags to gate the ability for a player to pick the item up*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesGoverningTags: 1;

    /** When dropping into the world, how many are dropped in a stack? -1 == Drop entire stack*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    int32 DropCount;

    /** This is the upper limit on how far away the item should be visible on the mini map */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    float MiniMapViewableDistance;

    /** The brush that is displayed for the item on the mini map */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    FSlateBrush MiniMapIconBrush;

    /** Name of what to call this item when used as a pick-up that belongs to a specific player. Example, if "Backpack" is put here, it will display as "Player1's Backpack" */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    FText OwnerPickupText;

    /** Stores the data asset containing  loot level data */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Loot Level")
    FDataTableCategoryHandle LootLevelData;

    /** If true, use PickupMeshTransform to override relative transform to apply to our pickup mesh */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    FTransform PickupMeshTransform;

    /** When this definition is used to create a pickup, should that pickup be registered as a special actor?
    *   Also requires the SpecialActorPickupTag to be set*/
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    bool bIsPickupASpecialActor;

    /**
     * If set, when this definition is used for dropping an item into the world it should add the pickup actor as a SpecialActor
     * in the GameState's system for tracking the location of the pickup using this item, and this Tag is the key to that data.
     * Also requires bIsPickupASpecialActor to be true
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FGameplayTag SpecialActorPickupTag;

    /** Stats to track for when this item is used as a pickup */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    TArray<FSpecialActorSingleStatData> SpecialActorPickupStatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FName PickupSpecialActorUniqueID;

    /** This is the minimap icon used to represent this item when it is a pickup */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FSlateBrush PickupMinimapIconBrush;

    /** The scale to draw the PickupMinimapIconBrush in the minimap */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FVector2D PickupMinimapIconScale;

    /** This is the compass icon used to represent this item when it is a pickup */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FSlateBrush PickupCompassIconBrush;

    /** The scale to draw the PickupCompassIconBrush in the minimap */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Special Actor")
    FVector2D PickupCompassIconScale;

    /** Amount of time that needs to go by until we despawn/destroy a pickup that is representing this item (0 = default, which is to never despawn) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FScalableFloat PickupDespawnTime;

    /** Amount of time that needs to go by until we despawn/destroy a pickup that is in the storm and is representing this item (0 = default, which is to never despawn) */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FScalableFloat InStormPickupDespawnTime;

    /**
     * When this item is used for a FortPickup, this will override the cull distance used for determining net relevancy of the FortPickup actor
     * NOTE: Value is in units and if set <= zero will not override and just use the game's default cull distance
     */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Functionality")
    FScalableFloat NetworkCullDistanceOverride;
    
protected:
    /** The optional static mesh to use for the pickup */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    TSoftObjectPtr<UStaticMesh> PickupStaticMesh;

    /** The optional skeletal mesh to use for the pickup */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    TSoftObjectPtr<USkeletalMesh> PickupSkeletalMesh;

    /** Pickup Effect Override Class */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Pickup Visuals")
    TSoftClassPtr<AFortPickupEffect> PickupEffectOverride;

    /** This is the default sound used when this object is picked up */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sounds")
    TSoftObjectPtr<USoundBase> PickupSound;

    /** Default sound used when this object is picked up by a nearby teammate or enemy */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sounds")
    TSoftObjectPtr<USoundBase> PickupByNearbyPawnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sounds")
    TSoftObjectPtr<USoundBase> DropSound;

    /** This is the default sound used when this object is dropped */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sounds")
    TSoftObjectPtr<USoundBase> DroppedLoopSound;

    /** This is an optional override sound for when a pickup impacts the environment */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Sounds")
    TSoftObjectPtr<USoundBase> LandedSound;

    // The recipe for disassembling this item. The durability degrade percentage will be applied to the results of this recipe
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Disassembly")
    FDataTableRowHandle DisassembleRecipe;

    //The lowest possible percent of the loot we will give you when you disassemble
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Disassembly")
    float DisassembleDurabilityDegradeMinLootPercent;
    
    //The highest possible percent of the loot we will give you when you disassemble
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Disassembly")
    float DisassembleDurabilityDegradeMaxLootPercent;

    /** The preferred quickbar slot for this item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredQuickbarSlot;

    /** Minimum level of this item */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Level")
    int32 MinLevel;
    /** The maximum level this item can reach, -1 means no max. Note that it can go higher with max level bonuses for certain item types. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Level")
    int32 MaxLevel;

    /** How many Slots this item takes when picked up. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Inventory")
    uint8 NumberOfSlotsToTake;
    
public:
    UFortWorldItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDurability(int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDPSAtLevel(int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageAtLevel(int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetAmmoWorldItemDefinition_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDisassembled() const;
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("WorldItem", GetFName());
    }
};

