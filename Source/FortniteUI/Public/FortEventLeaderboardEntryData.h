#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortEventLeaderboardEntryData.generated.h"

UCLASS(Blueprintable)
class UFortEventLeaderboardEntryData : public UObject {
    GENERATED_BODY()
public:
    UFortEventLeaderboardEntryData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowQualifiedIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalVictoryRoyales() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPointsForCategory(FName ScoreCategoryId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalMatchesPlayed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalEliminations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeammateDisplayNames(TArray<FString>& DisplayNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTeamDisplayNameText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeamAccountId(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumTeammates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLiveSessionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventWindowId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEventId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAveragePlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageMatchScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesLeaderboardHaveQualifiedIcons() const;
    
};

