#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortExperimentContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortExperimentContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortExperimentContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseSmallCatabaLayout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseCatabaScreenInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseCatabaScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseCatabaCarouselInGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseCatabaCarousel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowReloadVBucksIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowOldMOTDNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowNewVBuckColorsJuly2019() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowNewVBuckCoinAssetsJuly2019() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInGameStoreToast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowDynamicReloadVBucks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldProposeRequiredVBucksSKUs() const;
    
};

