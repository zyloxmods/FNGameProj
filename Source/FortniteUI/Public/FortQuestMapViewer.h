#pragma once
#include "CoreMinimal.h"
#include "FortQuestMapPage.h"
#include "FortQuestMapPageCosmetics.h"
#include "EViewerNavigationDirection.h"
#include "FortCampaignMap.h"
#include "FortQuestMapViewer.generated.h"

class UCanvasPanel;
class UFortQuestMapNodeLayout;
class UFortQuestMapScreen;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestMapViewer : public UFortCampaignMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CosmeticCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* FullQuestMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapScreen* ParentScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortQuestMapNodeLayout* NodeLayout;
    
public:
    UFortQuestMapViewer();
    UFUNCTION(BlueprintCallable)
    void SetQuestMapNodeLayout(UFortQuestMapNodeLayout* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLayoutFadeInAnimation();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToPage(EViewerNavigationDirection Direction);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToCurrentQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuestMapDataChangedBP();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestIndexSelectionModelIndexChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleLayoutOutroAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortQuestMapPage GetQuestMapData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortQuestMapPageCosmetics GetQuestMapCosmeticData() const;
    
    UFUNCTION(BlueprintCallable)
    void DisposeQuestMap();
    
};

