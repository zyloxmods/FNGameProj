#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortOnboardingAnalytics.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortOnboardingAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortOnboardingAnalytics();
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_VinderTipPlayed(const UObject* SourceBp, const FString& VinderTipTag);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_TutorialStartupFailed(const UObject* SourceBp, const int32 MatchmakingResult);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_TutorialCompleted(const UObject* SourceBp, bool WasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_TutorialCanceled(const UObject* SourceBp);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_MineCartDestroyed(const UObject* SourceBp);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CinematicSkipped(const UObject* SourceBp, const FString& CinematicName);
    
};

