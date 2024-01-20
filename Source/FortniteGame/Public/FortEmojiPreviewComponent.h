#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortEmojiPreviewComponent.generated.h"

class UAthenaEmojiItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortEmojiPreviewComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFortEmojiPreviewComponent();
    UFUNCTION(BlueprintCallable)
    void PushPreviewEmoji(const UAthenaEmojiItemDefinition* EmojiItem);
    
};

