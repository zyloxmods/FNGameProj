#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EFortPickerToDisplay.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "FortPickerTemporaryWheel.h"
#include "ItemDefOptionData.h"
#include "OnPickerCommandDelegateDelegate.h"
#include "OnPickerOptionChosenDelegateDelegate.h"
#include "OnPickerOptionSelectionMovedDelegateDelegate.h"
#include "OnShowPickerDelegateDelegate.h"
#include "SquadQuickChatOptionData.h"
#include "TrackedTrapTimeAndCount.h"
#include "FortPickerContext.generated.h"

class UFortItem;
class UFortItemDefinition;
class UFortPickerData;
class UFortSchematicItem;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortPickerContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPickerDelegate OnShowPicker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickerCommandDelegate OnPickerConfirm;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickerCommandDelegate OnPickerCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickerOptionSelectionMovedDelegate OnPickerOptionMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickerOptionChosenDelegate OnPickerOptionChosen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickerCommandDelegate OnPickerRefreshItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemDefOptionData> CustomPickerMenuItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSquadQuickChatOptionData> SquadChatMenuItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortItemDefinition*, FTrackedTrapTimeAndCount> TrackedTrapsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPickerData* PickerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSchematicItem*> AccountTrapSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPickerTemporaryWheel> AvailableWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentWheelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, int32> ConsumableStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FText> CategoryTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CategoryTags;
    
public:
    UFortPickerContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseLeftThumbstick() const;
    
    UFUNCTION(BlueprintCallable)
    void ShowRadialPickerMenu(EFortPickerToDisplay PickerType, int32 WheelIndex, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    void SetFortPickerData(UFortPickerData* Data);
    
    UFUNCTION(BlueprintCallable)
    void RestoreInputAxes();
    
    UFUNCTION(BlueprintCallable)
    void PickerOptionAccepted(int32 Option);
    
    UFUNCTION(BlueprintCallable)
    void PickerCanceled();
    
    UFUNCTION(BlueprintCallable)
    void LegacySwitchToAdjacentWheel(int32 SelectionDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRadialPickerOptionItem(int32 Index, UFortItem*& Item, bool& bOptionEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRadialPickerOptionImageAndLabel(int32 Index, FText& Label, FSlateBrush& Brush, TSoftObjectPtr<UTexture2D>& Icon, bool& bOptionEnabled, bool& bIsLocked) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPickerWheelAdjacency(bool& bCanPageLeft, bool& bCanPageRight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPickerOptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetListPickerOption(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWheelIndex() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetCurrentPickerDisplayName();
    
    UFUNCTION(BlueprintCallable)
    void GetAdjacentPickerWheelInformation(int32 Direction, FText& AdjacentTitle, bool& bCanPageThisDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesRadialCloseOnRelease() const;
    
};

