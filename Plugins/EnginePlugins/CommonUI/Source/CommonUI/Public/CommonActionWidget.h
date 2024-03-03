#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "CommonActionWidget.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class COMMONUI_API UCommonActionWidget : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputMethodChanged, bool, bUsingGamepad);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputMethodChanged OnInputMethodChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressMaterialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconRimBrush;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> InputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressDynamicMaterial;
    
public:
    UCommonActionWidget();
    UFUNCTION(BlueprintCallable)
    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    
    UFUNCTION(BlueprintCallable)
    void SetInputAction(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeldAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
};

