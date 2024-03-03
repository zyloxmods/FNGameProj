#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_InfiniteResources.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_InfiniteResources : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bInfiniteResources, meta=(AllowPrivateAccess=true))
    bool bInfiniteResources;
    
public:
    AFortAthenaMutator_InfiniteResources();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateResourceIcons();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bInfiniteResources();
    
};

