#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "AthenaNews.h"
#include "AthenaNewsEntry.h"
#include "CmsJsonMessages.h"
#include "CreativeAdSource.h"
#include "DynamicBackgroundsSource.h"
#include "KoreanCafeSource.h"
#include "SubgameScreenSource.h"
#include "CMSContext.generated.h"

class UFortPlayerSurveyCMSSurveyDataSource;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UCMSContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCmsJsonMessages CachedCmsMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyCMSSurveyDataSource* CMSSurveyDataSource;
    
public:
    UCMSContext();
    UFUNCTION(BlueprintCallable)
    void MarkPlaylistInformationAsViewed();
    
    UFUNCTION(BlueprintCallable)
    void MarkNewsAsViewed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewPlaylistInformationAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewNewsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSurvivalCMSText(FText& Title, FText& Body) const;
    
    UFUNCTION(BlueprintCallable)
    FSubgameScreenSource GetLatestSubgameInfo();
    
    UFUNCTION(BlueprintCallable)
    FKoreanCafeSource GetLatestPCBInfo();
    
    UFUNCTION(BlueprintCallable)
    FAthenaNews GetLatestNews(bool bGetOnlyMOTDNews);
    
    UFUNCTION(BlueprintCallable)
    FAthenaNewsEntry GetLatestEmergencyNotice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDynamicBackgroundsSource GetLatestDynamicBackgrounds() const;
    
    UFUNCTION(BlueprintCallable)
    FAthenaNews GetLatestCreativeNews(bool bGetOnlyMOTDNews);
    
    UFUNCTION(BlueprintCallable)
    FCreativeAdSource GetLatestCreativeAds();
    
};

