#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ECreativePortalManagerValidityResult.h"
#include "FortCreativePortalManager.generated.h"

class AFortAthenaCreativePortal;
class AFortCreativePortalManager;
class AFortPlayerControllerAthena;
class UObject;

UCLASS(Blueprintable)
class AFortCreativePortalManager : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaCreativePortal*> AllPortals;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPlayerControllerAthena>> PendingPortalReservations;
    
public:
    AFortCreativePortalManager();
    UFUNCTION(BlueprintCallable)
    void ReleasePortal(AFortAthenaCreativePortal* PortalToRelease);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCreativePortalManager(const UObject* WorldContextObject, AFortCreativePortalManager*& OutCreativePortalManager, ECreativePortalManagerValidityResult& OutIsValid);
    
};

