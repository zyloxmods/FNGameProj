#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_IsWorldResourceWidgetVisible.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_IsWorldResourceWidgetVisible : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bWoodResourceWidgetVisible, meta=(AllowPrivateAccess=true))
    bool bWoodResourceWidgetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bStoneResourceWidgetVisible, meta=(AllowPrivateAccess=true))
    bool bStoneResourceWidgetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bMetalResourceWidgetVisible, meta=(AllowPrivateAccess=true))
    bool bMetalResourceWidgetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bGoldCurrencyResourceWidgetVisible, meta=(AllowPrivateAccess=true))
    bool bGoldCurrencyResourceWidgetVisible;
    
public:
    AFortAthenaMutator_IsWorldResourceWidgetVisible();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bWoodResourceWidgetVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bStoneResourceWidgetVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bMetalResourceWidgetVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bGoldCurrencyResourceWidgetVisible();
    
};

