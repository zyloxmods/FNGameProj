#pragma once
#include "CoreMinimal.h"
#include "BuildingItemCollectorActor.h"
#include "EFortRarity.h"
#include "OutputItemChangedDelegate.h"
#include "Recipe.h"
#include "BuildingPhoenixItemCollectorActor.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable)
class ABuildingPhoenixItemCollectorActor : public ABuildingItemCollectorActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ResourceWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VendingTier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutputItemChanged OnOutputItemChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FRecipe> OutputItemRecipes;
    
public:
    ABuildingPhoenixItemCollectorActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetOutputRewardRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutputRewardLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveOutputRecipe(FRecipe& OutRecipe) const;
    
};

