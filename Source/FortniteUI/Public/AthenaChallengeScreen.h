#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "Engine/DataTable.h"
#include "DetailClassEntry.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengeScreen.generated.h"

class UAthenaChallengeScreenTileBase;
class UAthenaChallengeScreenTile_Daily;
class UAthenaChallengeSetBaseDetails;
class UCommonButton;
class UCommonButtonGroup;
class UDynamicEntryBox;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeSetBaseDetails> DefaultDetailsWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDetailClassEntry> DetailWidgestClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PrevCategoryInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaChallengeSetBaseDetails*> CreatedDetailWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaChallengeSetBaseDetails* ActiveDetailsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaChallengeScreenTileBase* LastSelectedTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_SectionTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_EventChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeScreenTile_Daily* ChallengeTile_Dailies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_WeeklyChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Row1_MissionChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Row2_MissionChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_StyleChallenges;
    
public:
    UAthenaChallengeScreen();
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldPlayHolidayVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHandleReplayHolidayVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyAssistedChallengeSet() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx);
    
    UFUNCTION(BlueprintCallable)
    void HandleTabClicked(UCommonButton* TabButton, int32 TabIdx);
    
};

