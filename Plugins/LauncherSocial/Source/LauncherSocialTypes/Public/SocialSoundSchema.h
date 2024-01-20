#pragma once
#include "CoreMinimal.h"
#include "Sound/SlateSound.h"
#include "SocialSoundSchema.generated.h"

USTRUCT(BlueprintType)
struct FSocialSoundSchema {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound MessageReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound PartyInviteReceivedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound FriendInviteReceivedSound;
    
    LAUNCHERSOCIALTYPES_API FSocialSoundSchema();
};

