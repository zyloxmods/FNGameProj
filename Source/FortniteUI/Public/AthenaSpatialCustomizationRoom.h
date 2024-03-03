#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "McpVariantChannelInfo.h"
#include "AthenaSpatialItemPreviewScreen.h"
#include "ESpatialCustomizationRoomState.h"
#include "AthenaSpatialCustomizationRoom.generated.h"

class UAthenaSpatialCustomizationCategories;
class UAthenaSpatialCustomizationRoomData;
class UAthenaSpatialCustomizationSelection;
class UAthenaSpatialCustomizationSubscreenBase;
class UCommonButton;
class UFortGameStateComponent_EventLevel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpatialCustomizationRoom : public UAthenaSpatialItemPreviewScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationCategories* Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationSelection* Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_About;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaSpatialCustomizationRoomData* CustomizationRoomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventGameStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CurrentVariantChannelStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpatialCustomizationSubscreenBase*> SubScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpatialCustomizationRoomState RoomState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayedApplyColorHandle;
    
public:
    UAthenaSpatialCustomizationRoom();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowFirstTimeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoomStateChanged(ESpatialCustomizationRoomState CurrentRoomState, ESpatialCustomizationRoomState PreviousRoomState);
    
};

