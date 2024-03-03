#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaFeatTimelineListEntry.generated.h"

class UCommonButton;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortLazyImage;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaFeatTimelineListEntry : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_FeatInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SimpleButton_ClickArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FeatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FeatDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_QuestIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CompletedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Date;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovered;
    
public:
    UAthenaFeatTimelineListEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnHoverFeat();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaitingForCompletedTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTimespanInfoSet(int32 NumDays);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFeatInfoSet(int32 NumFeatsOnDay, int32 IdxOnDay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFeatCompletedThisSession();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoverFeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag CalculateSourceTag() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

