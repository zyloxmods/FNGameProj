#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EFireModeType.h"
#include "ELayoutDataType.h"
#include "OnCloseLayoutToolDelegate.h"
#include "OnFireModeChangeDelegate.h"
#include "OnHUDLayoutModeChangeDelegate.h"
#include "OnLayoutDirtyUpdatedDelegate.h"
#include "OnNewViewOffsetLerpDelegate.h"
#include "OnOpenCloseFireModePanelDelegate.h"
#include "OnOpenLayoutToolDelegate.h"
#include "OnPropertyMenuStateChangeDelegate.h"
#include "OnRecenterPressedDelegate.h"
#include "OnViewOffsetUpdatedDelegate.h"
#include "OnWidgetSelectedDelegate.h"
#include "HUDLayoutToolContext.generated.h"

class UHUDLayoutToolPlacementWidget;

UCLASS(Blueprintable, NonTransient)
class UHUDLayoutToolContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPropertyMenuStateChange OnPropertyMenuStateChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCloseLayoutTool OnCloseLayoutTool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenLayoutTool OnOpenLayoutToolDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecenterPressed OnRecenterPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLayoutDirtyUpdated OnLayoutDirtyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnViewOffsetUpdated OnViewOffsetUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewViewOffsetLerp OnNewViewOffsetLerpDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDLayoutModeChange OnHUDLayoutModeChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetSelected OnWidgetSelectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenCloseFireModePanel OnOpenCloseFireModePanelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireModeChange OnFireModeChangeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HudLayoutSnappingDistance;
    
    UHUDLayoutToolContext();
    UFUNCTION(BlueprintCallable)
    void StartLerping(FVector2D NewViewOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSelectedWidgetProperties() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedWidget(UHUDLayoutToolPlacementWidget* NewSelectedWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetPropertyMenuState(bool bNewlyOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetLayoutVisibility(const bool bShowCombat, const bool bShowBuild, const bool bShowEdit, const bool bShowCreative);
    
    UFUNCTION(BlueprintCallable)
    void SetFireModeOpenState(bool bNewlyOpened);
    
    UFUNCTION(BlueprintCallable)
    void SetFireMode(EFireModeType NewFireMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFireMode(bool bAutofireEnabled, bool bForceTouchEnabled, bool bTapToShootEnabled, bool bAlwaysShowDedicatedButton);
    
    UFUNCTION(BlueprintCallable)
    void SaveLayout(ELayoutDataType LayoutType, const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void ResetSelectedWidgetProperties();
    
    UFUNCTION(BlueprintCallable)
    void ResetDirtyWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllWidgets();
    
    UFUNCTION(BlueprintCallable)
    void OnViewOffsetUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnToolOpened(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void OnRecenterPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnPanZoomWidgetClick();
    
    UFUNCTION(BlueprintCallable)
    void MarkAllDirty();
    
    UFUNCTION(BlueprintCallable)
    void LoadLayout(ELayoutDataType LayoutType, const FString& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedWidgetUnderPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayoutDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFireModeAvailable(EFireModeType NewFireMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCentered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSavedLayout(ELayoutDataType LayoutType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPropertyMenuState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPanning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsLerping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFireModeOpenState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFireMode(EFireModeType& FireMode, bool& bAutofireEnabled, bool& bForceTouchEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCurrentOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CloudHUDLayoutEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CloudHUDAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseLayoutTool(const FString& Reason);
    
    UFUNCTION(BlueprintCallable)
    void ClearLayout(ELayoutDataType LayoutType, const FString& Reason);
    
};

