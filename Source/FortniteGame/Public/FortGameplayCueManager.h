#pragma once
#include "CoreMinimal.h"
#include "GameplayCueManager.h"
#include "FortGameplayCueManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortGameplayCueManager : public UGameplayCueManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BROnlyGameplayCueNotifyPaths;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalAlwaysLoadedCueTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UClass*> PreloadedCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UClass*> AlwaysLoadedCues;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClientDelayLoadGameplayCues;
    
public:
    UFortGameplayCueManager();
};

