#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "AthenaReplayActionFeedRowBase.generated.h"

class AFortPlayerStateAthena;
class UAthenaReplayActionFeedRowProxyInstance;
class UCommonButton;
class UCommonTextBlock;
class UImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayActionFeedRowBase : public UCommonUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture_EliminationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Texture_DbnoIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_EventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_EventTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_InstigatorButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_VictimButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaReplayActionFeedRowProxyInstance* RowProxy;
    
public:
    UAthenaReplayActionFeedRowBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictimNameUpdated(const FText& VictimName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAdded(AFortPlayerStateAthena* FPSA);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstigatorNameUpdated(const FText& InstigatorName);
    
    
    // Fix for true pure virtual functions not being implemented
};

