#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCreativeInputDelegate.h"
#include "FortObjectMoverInputComponent.generated.h"

class AFortPlayerController;
class APlayerController;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortObjectMoverInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnDuplicateBuildingActorPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnDuplicateBuildingActorReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolLetGo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolCopyGrabOrDuplicatePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolCopyGrabOrDuplicateReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateClockwisePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateClockwiseReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateCounterclockwisePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateCounterclockwiseReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateSingleClockwisePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateSingleClockwiseReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateSingleCounterclockwisePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolRotateSingleCounterclockwiseReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolSwitchRotationAxisPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolSwitchRotationAxisReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnTouchMoveToolResetRotationPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolMirror;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolPushPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolPushReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolPullPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolPullReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolDropToFloor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolExitPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolExitReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolDeletePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolDeleteReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolChangePrecisionLevelPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolChangePrecisionLevelReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPlaysetPreviewPlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPlaysetPreviewPushPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPlaysetPreviewPushReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPlaysetPreviewPullPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPlaysetPreviewPullReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolScaleUpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolScaleUpReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolScaleDownPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolScaleDownReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolSwitchScaleAxisPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnTouchMoveToolResetScalePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolSwitchScaleAxisReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnCycleTransformationModeUpPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnCycleTransformationModeDownPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnSelectTranslationModePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnSelectRotationModePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnSelectScaleModePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMultiSelectPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMultiSelectReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnClearMultiSelectPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolHitTraceRulePressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnMoveToolHitTraceRuleReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwningPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeMoveToolEquippedInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PropPossessorEquippedInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MoveObjectsFreelyModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MultiSelectMoveObjectsFreelyModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MoveBuildingsOnGridModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MultiSelectMoveBuildingsOnGridModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* TranslationInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* RotationInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* ScaleInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* EmptyInputComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PlaysetPreviewModeInputComponent;
    
public:
    UFortObjectMoverInputComponent();
    UFUNCTION(BlueprintCallable)
    void PushTranslationInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushScaleInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushRotationInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushPropPossessorEquippedInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushPlaysetPreviewInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushMultiSelectMoveObjectsFreelyModeInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushMultiSelectMoveBuildingsOnGridModeInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushMoveObjectsFreelyInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushMoveBuildingsOnGridInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushEmptyInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PushCreativeMoveToolEquippedInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopTranslationInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopScaleInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopRotationInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopPropPossessorEquippedInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopPlaysetPreviewInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopMultiSelectMoveObjectsFreelyModeInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopMultiSelectMoveBuildingsOnGridModeInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopMoveObjectsFreelyInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopMoveBuildingsOnGridInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopEmptyInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopCreativeMoveToolEquippedInputComponent(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopAllInputModes(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    bool IsEmptyInputComponentActive();
    
};

