#pragma once
#include "CoreMinimal.h"
#include "FortLevelScriptActor.h"
#include "FortFrontendLevelScriptActor.generated.h"

class AFortFrontendLevelScriptActor;
class AFortItemPreviewPedestal;
class UObject;

UCLASS(Blueprintable)
class AFortFrontendLevelScriptActor : public AFortLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AFortItemPreviewPedestal> CommanderPreviewPedestalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AFortItemPreviewPedestal> HeroLoadoutPreviewPedestalActor;
    
public:
    AFortFrontendLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<AFortItemPreviewPedestal> GetHeroLoadoutPreviewPedestalActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortFrontendLevelScriptActor* GetFrontendLevelScript(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<AFortItemPreviewPedestal> GetCommanderPreviewPedestalActor() const;
    
};

