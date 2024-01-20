#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "CommonPoolableWidgetInterface.h"
#include "AlterationOption.h"
#include "FortItemQuantityPair.h"
#include "EFortAlterationOptionType.h"
#include "FortAlterationOption.generated.h"

class UFortAlterationItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAlterationOption : public UCommonButton, public ICommonPoolableWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlterationOption AlterationOption;
    
public:
    UFortAlterationOption();
    UFUNCTION(BlueprintCallable)
    void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortItemQuantityPair> GetRequiredIngredients() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextPipCount(float MaxPipCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPipCount(float MaxPipCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortAlterationOptionType GetAlterationOptionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetAlterationDefinition() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

