#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyBeaconPlayerState.h"
#include "EFortCustomGender.h"
#include "ETrustedPlatformType.h"
#include "FortAthenaLoadout.h"
#include "FortLobbyBeaconPlayerState.generated.h"

class UFortHeroType;

UCLASS(Abstract, Blueprintable, NonTransient)
class AFortLobbyBeaconPlayerState : public ALobbyBeaconPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConsoleUniqueNetId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl ConsoleUniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 TeamAffiliation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharXP, meta=(AllowPrivateAccess=true))
    int32 CurrentCharXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MatchmakingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroId, meta=(AllowPrivateAccess=true))
    FString HeroId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroType, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticLoadout, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 LobbyTimeRemaining;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_HomeBaseVersion, meta=(AllowPrivateAccess=true))
    int64 HomeBaseVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Gadgets, meta=(AllowPrivateAccess=true))
    TArray<FString> SelectedGadgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrustedPlatformType TrustedPlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterGender, meta=(AllowPrivateAccess=true))
    EFortCustomGender CharacterGender;
    
public:
    AFortLobbyBeaconPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HomeBaseVersion();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Gadgets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticLoadout();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConsoleUniqueNetId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharXP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterGender();
    
};

