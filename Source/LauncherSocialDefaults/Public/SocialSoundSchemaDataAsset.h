#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialSoundSchema.h"
#include "SocialSoundSchemaDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialSoundSchemaDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialSoundSchema SoundSchema;
    
    USocialSoundSchemaDataAsset();
};

