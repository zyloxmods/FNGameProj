#pragma once
#include "CoreMinimal.h"
#include "FortAlterableItem.h"
#include "Recipe.h"
#include "FortSchematicItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortSchematicItem : public UFortAlterableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Refundable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool refund_legacy_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> alteration_base_rarities;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bGrantedByAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RequiredTeamLevel;
    
public:
    UFortSchematicItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBulkCraftable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRecipe GetSchematicRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSchematicQuantityProduced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredTeamLevelToCraft() const;
    
};

