#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlaysetStreamingData.h"
#include "PlaysetLevelStreamComponent.generated.h"

class UFortPlaysetItemDefinition;
class ULevelStreamingDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlaysetLevelStreamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStreamInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoLoadLevel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowUnload: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* CurrentPlayset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientPlaysetData, meta=(AllowPrivateAccess=true))
    FFortPlaysetStreamingData ClientPlaysetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayersWithValidPlaysetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* StreamedLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClientLoadedPackageName;
    
public:
    UPlaysetLevelStreamComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayset(UFortPlaysetItemDefinition* NewPlayset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientPlaysetData();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedUnloading();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoading_Internal();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoading();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetCurrentPlayset() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayset();
    
};

