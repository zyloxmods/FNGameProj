#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaBattleBusItemDefinition.generated.h"

class ABattleBusCosmeticInstanceBase;
class USoundBase;

UCLASS(Blueprintable)
class UAthenaBattleBusItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> IgnitionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> LobbyLoopingMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> LobbyLoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> FlightLoopingMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> FlightLoopingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABattleBusCosmeticInstanceBase> BusPrefabClass;
    
public:
    UAthenaBattleBusItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetLobbyLoopingSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetLobbyLoopingMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetIgnitionSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetFlightLoopingSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetFlightLoopingMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<ABattleBusCosmeticInstanceBase> GetBusPrefabClass() const;

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaBattleBus", GetFName());
    }
};

