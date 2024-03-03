#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "EFortTheaterMapTileType.h"
#include "FortAvailableMissionAlertData.h"
#include "FortAvailableMissionData.h"
#include "FortClientOnlyActor.h"
#include "FortHexMapCoord.h"
#include "GameDifficultyInfo.h"
#include "Templates/SubclassOf.h"
#include "FortTheaterMapTile.generated.h"

class AActor;
class UFortQuestItem;
class UFortZoneTheme;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortTheaterMapTile : public AFortClientOnlyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHostSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoToPromptEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHexMapCoord MapCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFinishedLoading;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTheaterMapTileType TileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortZoneTheme> ZoneThemeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TileIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SelectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusedBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedBrightnessRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedPulseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBrightnessCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowQuickplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticMeshMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InitialLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAvailableMissionData MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAvailableMissionData LastValidMissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoneDifficultyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAvailableMissionAlertData MissionAlertData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> AdjacencyMIDs;
    
public:
    AFortTheaterMapTile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshTile();
    
    UFUNCTION(BlueprintCallable)
    void OnTileClicked(AActor* ClickedActor, FKey ButtonReleased);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectWrapper(bool bIsGameSessionOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProfileBannerChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnMouseOverEnd(AActor* MousedOverActor);
    
    UFUNCTION(BlueprintCallable)
    void OnMouseOverBegin(AActor* MousedOverActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionDataUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMarkedQuestChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeTile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostDeselect();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableGoToPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableGoToPrompt();
    
    UFUNCTION(BlueprintCallable)
    void OnDeselectWrapper(bool bIsGameSessionOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDefocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientDeselect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileValidForMarkedQuest(UFortQuestItem*& OutMarkedQuest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileQuestRecommended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTilePlayable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileInPhoenixTheater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTileHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamRatingDataValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionAlertTile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidMissionData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameDifficultyInfo GetZoneDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMissionDefinitionIcon(FSlateBrush& OutMissionDefIcon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionContentDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetMissionAlertVisualTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionAlertCategoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTileAllowQuickplay() const;
    
};

