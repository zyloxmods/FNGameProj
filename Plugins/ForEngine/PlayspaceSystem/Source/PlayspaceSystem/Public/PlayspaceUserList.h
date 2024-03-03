#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PlayspaceUser.h"
#include "PlayspaceUserList.generated.h"

class APlayspace;

USTRUCT(BlueprintType)
struct PLAYSPACESYSTEM_API FPlayspaceUserList : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPlayspaceUser> PlayspaceUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    APlayspace* Playspace;
    
    FPlayspaceUserList();
};

