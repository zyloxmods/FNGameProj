#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "InputCoreTypes.h"
#include "FortEventLevelNavigationDisplayDetails.h"
#include "NavOptions.h"
#include "NavWidgetSettingContainer.h"
#include "NavWidgetSettings.h"
#include "OnMcpInventoryUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortEventLevelNavigationActor.generated.h"

class AFortPlayerController;
class UFortEventLevelNavigationWidget;
class UFortGameStateComponent_EventLevel;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UUserWidget;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class AFortEventLevelNavigationActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NavDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavWidgetSettingContainer> NavWidgetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavWidgetSettings DefaultNavWidgetSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_NavigationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_CursorTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortEventLevelNavigationWidget> IndicatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> CursorTargetWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DisplayMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NavigationActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CamerasThisNavObjectIsActiveFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> CameraToNavigateTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> AdditionalHighlightObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> SpecialInteractionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavOptions> CameraNavOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysHighliteOnMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MobileHighlightStencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideMobileMeshSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshSizeOverrideScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorHoverHighlightStencilValue;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> LevelController;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortGameStateComponent_EventLevel> GSC_StreamingLevelOwner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMcpInventoryUpdated OnInventoryUpdated;
    
public:
    AFortEventLevelNavigationActor();
    UFUNCTION(BlueprintCallable)
    void UpdateBangState(FGameplayTag BangTacker, bool bShowBang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateWidgetVisibility(AFortPlayerController* PlayerController, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeForPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPurchasedSeasonBook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleObjectSpecialInteraction(FGameplayTag ActionTag, FGameplayTag CameraTag);
    
protected:
    UFUNCTION()
    void HandleMCPInventoryChanged(const TSet<FString>& TypesChanged, int64 ProfileRvn);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDisplayMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayMeshEndCursorOver(UPrimitiveComponent* TouchedComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable)
    void HandleDisplayMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGameStateComponent_EventLevel* GetOwningGameStateComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortEventLevelNavigationDisplayDetails GetDisplayDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanCommitNavigationRequest() const;
    
};

