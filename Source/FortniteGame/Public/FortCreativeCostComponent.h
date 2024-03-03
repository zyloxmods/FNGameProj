#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFortResourceType.h"
#include "FortCreativeCostComponent.generated.h"

class AFortPawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeCostComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowCostInInteractionIndicator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> ItemCosts;
    
public:
    UFortCreativeCostComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TakeWorldResourcesFromPlayer(AFortPawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    void SetItemResourceCost(const EFortResourceType ResourceType, const int32 Cost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PassesCostCheck(const AFortPawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetItemCosts() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCosts();
    
};

