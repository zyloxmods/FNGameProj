#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "FortPlayerStartCreative.generated.h"

class UFortCreativeVolumeLinkComponent;

UCLASS(Blueprintable)
class AFortPlayerStartCreative : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlayerStartTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PortalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ApplicableTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsIslandStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LockedPlayerNameSubstring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeVolumeLinkComponent* CreativeLinkComponent;
    
public:
    AFortPlayerStartCreative();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClaimedByPlayer(FUniqueNetIdRepl UniqueId) const;
    
};

