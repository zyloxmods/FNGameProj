#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "EFortInputActionGroup.h"
#include "InputCoreTypes.h"
#include "FortActionBeingUnbound.h"
#include "FortOptionsTab.h"
#include "Templates/SubclassOf.h"
#include "FortInputOptions.generated.h"

class UCommonListView;
class UCommonTextBlock;
class UFortOptionsMenuInputData;
class UObject;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortInputOptions : public UFortOptionsTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortOptionsMenuInputData*> InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* InputCommonListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TooltipDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InputCategoryWidgetClass;
    
public:
    UFortInputOptions();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUsingGamepadChanged(ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetListWidget(UObject* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInputDisplayTextBP(int32 RowIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputDataIndexForActionName(const FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBoundKeyNameBP(int32 RowIndex, bool IsPrimary) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFortOptionsMenuInputData*> GetActionItemsInGroup(const EFortInputActionGroup InputActionGroup) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortActionBeingUnbound GetActionBeingUnbound(bool bIsPrimarySlot, int32 Input, FKey NewKey) const;
    
    UFUNCTION(BlueprintCallable)
    void ConstructKeyBindList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBinding(bool bIsPrimarySlot, int32 Input, FKey NewKey);
    
};

