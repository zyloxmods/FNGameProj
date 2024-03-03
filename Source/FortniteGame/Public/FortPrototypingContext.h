#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EFortPrototypingStatus.h"
#include "FortPrototypingContext.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPrototypingContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPrototypingStatusChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrototypingStatusChanged OnPrototypingStatusChangedEvent;
    
    UFortPrototypingContext();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMcpProfilesInitialized();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPrototypingStatus GetPrototypingStatus() const;
    
};

