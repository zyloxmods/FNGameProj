#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemQuantityPair.h"
#include "FortItemBaseWidget.generated.h"

class UFortItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemBaseWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemQuantityPair ItemQuantityPair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
public:
    UFortItemBaseWidget();
    UFUNCTION(BlueprintCallable)
    bool SetItemQuantityPairToRepresent(FFortItemQuantityPair InItemQuantityPair);
    
    UFUNCTION(BlueprintCallable)
    void SetItemDefinitionToRepresent(UFortItemDefinition* InItemDefinition);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemDefinitionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCountChanged(int32 NewCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemCountChanged(UFortItemDefinition* Definition, int32 Delta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemDefinition* GetItemDefinition() const;
    
};

