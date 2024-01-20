#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaProfileStatsBase.generated.h"

class UAthenaMatchStatView;
class UAthenaProfileStatBox;
class UAthenaSeasonStats;
class UFortMcpProfileAthenaStats;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaProfileStatsBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaProfileStatBox* ProfileStatBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSeasonStats*> StatSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonStats* CurrentViewedStatSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaMatchStatView* CurrentStatView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentPlaylist;
    
public:
    UAthenaProfileStatsBase();
    UFUNCTION(BlueprintCallable)
    void Setup(const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void PrevStatSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatSetChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFetchingData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnProfileLoaded(UFortMcpProfileAthenaStats* ProfileAthenaStats);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDataRecieved();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 NumStatSets() const;
    
    UFUNCTION(BlueprintCallable)
    void NextStatSet();
    
    UFUNCTION(BlueprintCallable)
    void NextPlaylist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaSeasonStats* GetCurrentStatSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentPlaylistName() const;
    
};

