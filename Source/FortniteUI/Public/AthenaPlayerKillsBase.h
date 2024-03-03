#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaPlayerKillsBase.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerStateAthena;
class UObject;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerKillsBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* KillsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* KillsSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCustomKillSource;
    
public:
    UAthenaPlayerKillsBase();
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerState(AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetKillsSourcePlayerController(AFortPlayerControllerAthena* InPlayerController);
    
};

