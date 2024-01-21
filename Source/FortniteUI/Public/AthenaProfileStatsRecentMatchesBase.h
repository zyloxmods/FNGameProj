#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaProfileStatsRecentMatchesBase.generated.h"

class UAthenaMatchStatView;
class UFortMcpProfileAthenaStats;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaProfileStatsRecentMatchesBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaMatchStatView*> RecentMatches;
    
public:
    UAthenaProfileStatsRecentMatchesBase();
    UFUNCTION(BlueprintCallable)
    void Setup(const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFetchingData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecentMatcheChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnProfileLoaded(UFortMcpProfileAthenaStats* ProfileAthenaStats);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataRecieved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAthenaMatchStatView*> GetRecentMatches() const;
    
};

