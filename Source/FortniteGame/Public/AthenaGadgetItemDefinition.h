#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "FortCreativeTagsBearer.h"
#include "FortCreativeTagsHelper.h"
#include "FortGadgetItemDefinition.h"
#include "SpecialActorSingleStatData.h"
#include "Templates/SubclassOf.h"
#include "AthenaGadgetItemDefinition.generated.h"

class UFortInteractContextInfoWidget;

/** @class UAthenaGadgetItemDefinition
    This world item never persists and is used to add "gadget" style gameplay to FNBR.
    Imagine activatable abilities on the quick bar that provide AOE buffs/debuffs or shoot projectiles
    Imagine passive/override abilities like swapping your normal jump out for a jet pack
    Imagine passive effects that grant more shields or faster sprint speed
    The item will have an optional set of Character Parts so it can override the existing Character Parts
    as needed. Pairs well with swapping out jump for a jetpack because it could provide the character part
    backpack for the jet pack.
*/
UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaGadgetItemDefinition : public UFortGadgetItemDefinition, public IFortCreativeTagsBearer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeDroppedWhenEquipmentChangeIsBlocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowedFuelGadgetUI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowCooldownUI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowShortDescriptionInPickupDisplay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayPlayerNameForInventoryActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayHealthForInventoryActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayShieldForInventoryActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialActorInventoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InventorySpecialActorUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InventoryMinimapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InventoryMinimapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InventoryCompassIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InventoryCompassIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InventoryActorDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialActorSingleStatData> SpecialActorInventoryStatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeTagsHelper CreativeTagsHelper;
    
public:
    UAthenaGadgetItemDefinition(const FObjectInitializer& ObjectInitializer);
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaGadget", GetFName());
    }
};

