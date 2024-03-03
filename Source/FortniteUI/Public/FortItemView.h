#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "FortItemViewSettings.h"
#include "FortItemView.generated.h"

class UCommonActivatableWidget;
class USceneComponent;

UCLASS(Blueprintable)
class UFortItemView : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUserInputChangedView);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UnifiedSupportsCameraControlInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UnifiedZoomInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoomOutInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoomInInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RotateInputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInputChangedView OnItemRotationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserInputChangedView OnItemZoomLevelChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> RegisteredInputActions;
    
public:
    UFortItemView();
    UFUNCTION(BlueprintCallable)
    void UnregisterInputActions();
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FFortItemViewSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetSceneComponentToAffect(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningWidget(UCommonActivatableWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreInitialTransform();
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputActions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortItemViewSettings GetSettings() const;
    
};

